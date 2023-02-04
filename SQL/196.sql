DELETE FROM Person 
	WHERE id IN (
		SELECT p2.id FROM Person p1 JOIN Person p2 ON 
		p1.Email=p2.Email AND 
		p1.id<p2.id
	)