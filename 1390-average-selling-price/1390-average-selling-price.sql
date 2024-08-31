SELECT Prices.product_id, 
       ifnull(ROUND(SUM(price * units) / SUM(units), 2),0) AS average_price 
FROM Prices 
left JOIN UnitsSold 
ON Prices.product_id = UnitsSold.product_id 
and purchase_date BETWEEN start_date AND end_date 
GROUP BY product_id 

