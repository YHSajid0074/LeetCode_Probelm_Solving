select machine_id, round(2 * sum(
  case
    when activity_type = 'start' then -timestamp
    when activity_type = 'end' then timestamp
  end
) / count(timestamp), 3) as processing_time 
from activity 
group by machine_id