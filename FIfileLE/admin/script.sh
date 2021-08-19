
#flagfile -> zip20 -> img20 -> zip19 -> img19 -> zip18 -> img19 -> zip17


i = 20
for i in {20..00}
do
	j=$(expr $i - 01)
	cat img/${j}.jpg zip/${i}.zip >> out/ok.jpg
done
