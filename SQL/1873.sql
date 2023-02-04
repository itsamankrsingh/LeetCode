SELECT employee_id, 
(CASE WHEN (employee_id % 2 != 0 and SUBSTRING(name,1,1)!='M') THEN salary else 0 END) 
AS bonus 
FROM Employees 
ORDER BY employee_id