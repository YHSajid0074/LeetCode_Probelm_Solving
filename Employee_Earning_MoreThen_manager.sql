SELECT e1.name AS Employee  
FROM Employee e1 
INNER JOIN Employee e2  
ON e2.id=e1.managerId 
WHERE e1.salary>e2.salary