/* Write your T-SQL query statement below */
select name from salesperson where sales_id not in (
select o.sales_id from orders o left join company c on o.com_id = c.com_id where c.name like 'RED'
	)