SELECT s.student_id,s.student_name,s1.subject_name,IFNULL(COUNT(e.subject_name),0)AS attended_exams
 FROM Students s 
 JOIN Subjects s1 
 LEFT JOIN Examinations e 
 ON s.student_id=e.student_id 
 AND e.subject_name =s1.subject_name 
 GROUP BY s.student_id,s1.subject_name 
 ORDER BY s.student_id ASC,s1.subject_name