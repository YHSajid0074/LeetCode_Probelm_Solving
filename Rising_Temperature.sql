
Select first.id
from Weather first, Weather sec
where DATEDIFF(first.recordDate,sec.recordDate) =1 
and first.temperature>sec.temperature;

