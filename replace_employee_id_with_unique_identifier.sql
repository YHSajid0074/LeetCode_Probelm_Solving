SELECT e.unique_id ,e1.name 
FROM Employees e1
 LEFT JOIN EmployeeUNI e 
 ON e1.id=e.id 