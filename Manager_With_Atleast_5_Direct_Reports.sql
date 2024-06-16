SELECT e.name
FROM Employee e
WHERE e.id IN (
    SELECT e1.managerId
    FROM Employee e1
    GROUP BY e1.managerId
    HAVING COUNT(e1.id) >= 5
);
