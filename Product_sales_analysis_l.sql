SELECT p1.product_name,s.year,s.price 
FROM Sales s 
LEFT JOIN Product p1 
ON s.product_id=p1.product_id
ORDER BY s.year