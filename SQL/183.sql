SELECT name AS Customers FROM Customers LEFT JOIN Orders ON Customers.Id = Orders.customerid 
WHERE customerid IS NULL