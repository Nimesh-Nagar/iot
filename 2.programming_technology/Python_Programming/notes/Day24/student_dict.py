#std = []
std = [{"name" : "Abhishek", "prn" : 1,"address":{"city":"pune"}},
       {"name" : "Abdur", "prn" : 2,"address":{"city":"pune"}},
       {"name" : "Vivek", "prn" : 3,"address":{"city":"pune"}}]
std[0] #{"name" : "Abhishek", "prn" : 1}
std[1] #{"name" : "Abdur", "prn" : 2}
std[1]["name"] #Abdur
std[0]["prn"] #1
std[2]["name"] #Vivek

#"name" in std

s1 = {
	"name" : "Tushar",
	"prn" : 30,
	"phone" : "7738954122",
	"dob": "18/11/1998",
	"address":{ 
		"state": "MH",
		"city" : "Mumbai"
	},
	"hobbies": ["Watching space documentry","Cooking","Video games"],
}
s1["address"]["state"] #MH
s1["hobbies"][0] #"Watching space documentry"
s1["hobbies"][0][1:4] #atc






