SELECT u1.name,
       COALESCE((SELECT SUM(r.distance) 
                 FROM Rides r 
                 WHERE r.user_id = u1.id), 0) AS travelled_distance
FROM Users u1
ORDER BY travelled_distance DESC, u1.name ASC;

