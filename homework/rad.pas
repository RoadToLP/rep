var r, g, have:real;
var choose:string;
begin
	writeln('Choose "r" to rad from grad, "g" from grad to rad');
	readln(choose);
	writeln('Type quantity');
	readln(have);
	if choose = 'r' then
		writeln((have*pi)/180)
	else writeln((180*have)/pi);
end.
