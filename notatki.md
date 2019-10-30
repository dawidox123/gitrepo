# Kwerendy w SQL

select imie, nazwisko,listy.nazwa, punkty, data
from osoby
inner join punktacja
on osoby.id_osoby = punktacja.id_osoby
inner join listy
on punktacja.id_listy = listy.id_listy
where  nazwa = 'p4' and punkty>=20
order by listy.nazwa, punktacja.punkty;
