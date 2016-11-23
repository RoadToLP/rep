var x1,x2,y1,x3,x4,y3,s:real;
begin
	read(x1, y1, x2, x3, y3, x4);
	if (x3>=x2)or(x4<=x1) then write('Прямоугольники не пересекаются!')
	else
	 begin
	  if y1>=y3 then
	   begin
	    if(x3>=x1)and(x4<=x2)then s:=(x4-x3)*y3 else
	    if(x3>=x1)and(x4>=x2)then s:=(x2-x3)*y3 else
	    if(x3<=x1)and(x4>=x2)then s:=(x2-x1)*y3 else
	    if(x3<=x1)and(x4<=x2)then s:=(x4-x1)*y3
	   end
	  else
	   begin
	    if(x3>=x1)and(x4<=x2)then s:=(x4-x3)*y1 else
	    if(x3>=x1)and(x4>=x2)then s:=(x2-x3)*y1 else
	    if(x3<=x1)and(x4>=x2)then s:=(x2-x1)*y1 else
	    if(x3<=x1)and(x4<=x2)then s:=(x4-x1)*y1
	   end;
	  write('Прямоугольники пересекаются, площадь пересечения=',s:0:2);
	 end;
	readln	
end.
