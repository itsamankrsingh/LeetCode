/* Write your T-SQL query statement below */

SELECT employee_id FROM 
(select employee_id from employees union select employee_id from salaries) t
WHERE employee_id IN
(
SELECT CONCAT(e.employee_id,s.employee_id) AS employee_id FROM Employees e FULL JOIN Salaries s 
ON e.employee_id=s.employee_id 
WHERE e.name IS NULL OR s.salary IS NULL
)
ORDER BY employee_id


/* Postgres*/
SELECT employee_id FROM 
(select employee_id from employees union select employee_id from salaries) t
WHERE employee_id IN
(
SELECT CONCAT(e.employee_id,s.employee_id) AS employee_id FROM Employees e FULL JOIN Salaries s 
ON e.employee_id=s.employee_id 
WHERE e.name IS NULL OR s.salary IS NULL
)
ORDER BY employee_id
