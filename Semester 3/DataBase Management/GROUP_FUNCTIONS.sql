use office;
select max(salary)
from employees;
select min(salary)
from employees;
select avg(salary)
from employees;
select sum(salary)
from employees;
select count(salary)
from employees;
select department_id,avg(salary)
from employees
group by department_id;
select department_id,count(*)
from employees
group by department_id;
select department_id,max(salary)
from employees
where department_id!=20
group by department_id
having max(salary)>5000;