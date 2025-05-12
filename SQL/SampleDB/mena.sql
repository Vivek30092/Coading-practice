DROP DATABASE IF EXISTS menagerie;
CREATE DATABASE menagerie;
USE menagerie;
SOURCE C:/Users/housh/Desktop/vivek/coading/SQL/SampleDB/cr_pet_tbl.sql
LOAD data local infile 'C:/Users/housh/Desktop/vivek/coading/SQL/sampleDB/pet.txt' INTO TABLE pet;
source C:/Users/housh/Desktop/vivek/coading/SQL/SampleDB/ins_puff_rec.sql
source C:/Users/housh/Desktop/vivek/coading/SQL/SampleDB/cr_event_tbl.sql
LOAD data local infile 'C:/Users/housh/Desktop/vivek/coading/SQL/SampleDB/event.txt' INTO TABLE event;
