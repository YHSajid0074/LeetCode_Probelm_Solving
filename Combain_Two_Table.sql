SELECT firstName,lastName,city,state 
FROM Address
RIGHT JOIN Person 
on Person.personId=Address.personId
