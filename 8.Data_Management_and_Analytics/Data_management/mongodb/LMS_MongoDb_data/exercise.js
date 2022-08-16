use BoxOffice // creates database
 db.createCollection("Movie") // creates collection
 show databases
 db.getCollectionInfos() 
 
 //Insert one document
 db.Movie.insertOne({"name":"Pardes", "Box_office_collecrtion":900000, "invested_amount":30000})
 db.Movie.find() // to see inserter documents 
 db.Movie.insertOne({name:"DDLJ", "Box_office_collecrtion":400000, "invested_amount":10000})
 
 // Insert many documents
 db.Movie.insertMany([
     {name:"HULK" , "Box_office_collecrtion":200000, "invested_amount":1000, genre:"fiction" }, 
     {name:"IRON MAN" , "Box_office_collecrtion":150000, "invested_amount":100, franchise:"Marvels Studio"}
     
     ])
  db.Movie.find() // to see inserter documents 
 
 /* Display name of movie AND invested amount using find function */
  db.Movie.find({},{name:1,invested_amount:1}) // 1=true , 0=false

 /* Display name of movie AND invested amount whose name = 'DDLJ' using find function */     
 db.Movie.find({name:"DDLJ"},{name:1,invested_amount:1,_id:0}) 
 
 
 db.createCollection("masterNimo") // creates collection 
 db.masterNimo.drop()  
 /* ---------------------------------------------------------------------------------------------- */
 // INsert many documents
  db.Movie.insertMany([
      {name:"HULK",Box_office_collecrtion:20000,invested_amount:1000},
      {name:"IRON MAN",Box_office_collecrtion:150000,invested_amount:100},
      {name:"HULK",Box_office_collecrtion:20000,invested_amount:1000},
      {name:"IRON MAN",Box_office_collecrtion:150000,invested_amount:100},
      {name:"DOCTOR STRANGE",Box_office_collecrtion:20000,invested_amount:-999},
      {name:"DOCTOR STRANGE",Box_office_collecrtion:20000,invested_amount:-999},
      {name:"WAQT",Box_office_collecrtion:150000,invested_amount:-9},
      {name:"WAQT",Box_office_collecrtion:150000,invested_amount:-8},             
  ])
 
 /* delete all doc that has name = HULK*/
 db.Movie.deleteMany({name:"HULK"})
 
 /* delete any one document that has name ="IRON MAN"*/
 db.Movie.deleteOne({name:"IRON MAN"})
 
 /* upadate the invested_amount to 10,000 for all documents taht has name="DOCTOR STRANGE" */
 db.Movie.updateMany({name:"DOCTOR STRANGE"},{ $set: {invested_amount:10000} })
 
 /* update the invested_amount to 10 for any one document that has anme=WQAT*/
 db.Movie.updateOne( {name:"WAQT"}, {$set: {invested_ami=unt} } )
 
 /*Output the name of movie and invested amount, of all those whose name have a/A in it   */
 
 db.getCollection("Movie").find({name:/.* a *./i});
 db.Movies.find({name:})
 
 /* output the name of the movie and invested amount of all those who have invested amount is greather than 10,000  */
 db.getCollection("Movie").find({invested_amount : {$gt: 10000} })
 
 /* output the name of movie and invested amount of all those who have genre Fiction*/
 db.getCollection("Movies").find({genre: "/.*fiction*./i" })
 
 db.Movie.find({genre: { $eq: "/.*f*./i" }},{});
 db.Movie.getCollectionInfos()
 
 db.Movie.find()
 
 /*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
// (Q1) Name of the supplier that resides in chennai (case in-sensative) 

use LMS
db.LMS_SUPPLIERS_DETAILS.find({ADDRESS:/Chennai/i},{})

// (Q2) Name of the supplier that resides in chennai/delhi/ahmedabad (case in-sensative)  

db.LMS_SUPPLIERS_DETAILS.find({ ADDRESS: {$in : [/chennai/i,/delhi/i,/AhmeDabaD/i] } });

// (Q3) NAME OF SUPPLIER ,CONTACT, EMAIL,ADDRESS WHO RESIDES IN EITHER MUMBAI OR DELHI and email does not belong to gamil account

db.LMS_SUPPLIERS_DETAILS.find( {ADDRESS:{$in :[/mumbai/i,/delhi/i ]}, EMAIL : {$not : /gmail.com/i} },{ SUPPLIER_NAME:1, CONTACT:1, EMAIL:1, CONTACT:1 } ) 

// (Q4) book name, book publication of all books placedd in rack num =a1

db.LMS_BOOK_DETAILS.find({RACK_NUM:"A1"},{BOOK_TITLE:1,PUBLICATION:1,RACK_NUM:1});

// (Q5) book code , member id of all books issued which have been fined

db.LMS_BOOK_ISSUE.find({FINE_RANGE : {$ne:null} },{BOOK_CODE:1,MEMBER_ID:1,FINE_RANGE:1})

//(Q6) Query for embedded dataset book name, and publications who has atleat one supplier from chennai (case insensitive) hint : $elemMatch

db.EMBEDDED_JSON.find({'BOOKS_SUPPLIED': {$elemMatch: { "ADDRESS" : "/chennai/i}} },{'BOOK_TITLE':1,'PUBLICATION':1 } )
    
    
    
    
    
    
    
    
    




 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 