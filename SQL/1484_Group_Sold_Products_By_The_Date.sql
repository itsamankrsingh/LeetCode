/*for ms sql server*/
SELECT sell_date, 
COUNT(DISTINCT product) AS num_sold,
STRING_AGG(product,',') WITHIN GROUP(ORDER BY product) AS products
FROM (SELECT DISTINCT sell_date,product FROM activities) t
GROUP BY sell_date
ORDER BY sell_date

/* for postgres*/
SELECT sell_date, COUNT(DISTINCT product) AS num_sold,
STRING_AGG(DISTINCT product,',' ORDER BY product) AS product
FROM activities
GROUP BY sell_date
ORDER BY sell_date
