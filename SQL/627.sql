
UPDATE salary SET sex = (CASE WHEN sex = 'm' THEN 'f' else 'm' END)