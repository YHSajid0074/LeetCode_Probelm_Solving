SELECT u.name, 
       COALESCE(SUM(t.amount), 0) AS balance
FROM Users u
LEFT JOIN Transactions t ON u.account = t.account
GROUP BY u.name
HAVING SUM(t.amount) > 10000;