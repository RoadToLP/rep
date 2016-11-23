	var ax, ay, bx, by, cx, cy, dx, dy, a, b, c, d, d1, d2:real;
begin
	read (ax, ay, bx, by, cx, cy, dx, dy);
	a := sqrt(sqr(bx-ax) + sqr(by-ay));
	writeln(a);
	b := sqrt(sqr(cx-bx) + sqr(cy-by));
	writeln(b);
	c := sqrt(sqr(dx-cx) + sqr(dy-cy));
	writeln(c);
	d := sqrt(sqr(ax-dx) + sqr(ay-dy));
	writeln(d);
	d1 := sqrt(sqr(ax-cx) + sqr(ay-cy));
	writeln(d1);
	d2 := sqrt(sqr(bx-dx) + sqr(by-dy));
	writeln(d2);
	if (a = c) and (d = b) then writeln('Parallelogram')
	else writeln('NOT a Parallelogram');
	if (a = b) and (b = c) and (c = d) and (d = a) then writeln('Rombe')
	else writeln('NOT a Rombe');
	if d1 = d2 then 
	begin
		writeln('Rectangle');
		if a = b then writeln('Square')
		else writeln('NOT a square');
	end
	else begin
		writeln('NOT a rectangle');
		writeln('NOT a square');
	end;
	
end.
	
