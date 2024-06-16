SELECT p.product_id ,IFNULL(ROUND(SUM(u.units*p.price)/SUM(units),2) ,0)AS average_price 
FROM Prices p LEFT JOIN UnitsSold u
 ON p.product_id=u.product_id 
AND u.purchase_date 
BETWEEN p.Start_date 
and p.end_date 
GROUP BY p.product_id