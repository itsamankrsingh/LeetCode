/* Write your T-SQL query statement below */
SELECT firstname,lastname,city,state FROM person p LEFT JOIN address a on p.personid=a.personid