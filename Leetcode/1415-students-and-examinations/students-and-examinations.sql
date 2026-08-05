select s.student_id,s.student_name,sub.subject_name,
count(e.student_id) as attended_exams
from students s
cross join subjects sub
left join examinations e
on s.student_id=e.student_id
and e.subject_name = sub.subject_name
group by s.student_id,s.student_name,sub.subject_name
order by s.student_id,s.student_name
-- select e.student_id,e.subject_name,st.student_name
-- from examinations e
-- left join students st
-- on e.student_id=st.student_id
-- group by e.student_id, e.subject_name, st.student_name;