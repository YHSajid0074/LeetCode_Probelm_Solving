SELECT query_name ,ROUND((SUM(rating/position))/(SELECT COUNT(query_name)FROM Queries as squry where squry.query_name=Queries.query_name) ,2)AS quality ,ROUND((
SELECT COUNT(rating)
FROM Queries as squry where squry.query_name=Queries.query_name AND(rating<3 AND rating>0)

) / COUNT(rating) * 100,2 )AS poor_query_percentage FROM Queries GROUP BY query_name HAVING quality IS NOT NULL