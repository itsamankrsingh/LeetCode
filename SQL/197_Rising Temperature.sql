/* SQL SERVER*/
select w1.id from weather w1 join weather w2 on DATEDIFF(DAY,w2.recorddate,w1.recorddate) = 1 where w1.temperature>w2.temperature

/*Postgres*/
select w2.id from weather w1 join weather w2 on w2.recorddate-w1.recorddate =1 where w2.temperature>w1.temperature