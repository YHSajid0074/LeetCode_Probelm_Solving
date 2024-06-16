DELETE p1 
from Person p1, Person p2
WHERE p1.email=p2.email 
AND p1.id>p2.id;