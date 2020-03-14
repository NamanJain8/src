#!/bin/sh

rm director
rm slave

mv director_src director
mv slave_src slave

make

mv director director_src
mv slave slave_src

cp director_src/director director
cp slave_src/slave slave

sudo chown naman director
sudo chown naman slave
