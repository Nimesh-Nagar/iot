use LMS

// -------------------- JOINS ----------------------------
// LEFT JOIN is only possible-----------------------------

db.LMS_MEMBERS.aggregate([
    {$lookup : 
        {
            from:"LMS_BOOK_ISSUE",
            localField:"MEMBER_ID",
            foreignField:"MEMBER_ID",
            as : "output array of issuances"
        
        }   
    },
    
    {
        $match: { "output array of issuances" : {$ne : [] } }
    }
]);

// 2

db.LMS_SUPPLIERS_DETAILS.aggregate([
    {$lookup: 
        {
            from:"LMS_BOOK_DETAILS",
            localField:"SUPPLIER_ID",
            foreignField:"SUPPLIER_ID",
            as : "books"
        }    
    
    },
    {$unwind:
        {path: "$books" }
    
    },
    
    {$match:
        {ADDRESS: {$in :[/pune/i,/mumbai/i,/chennai/i]} }
    
    }


]); 















                                                                                                

