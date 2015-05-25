local pretty = require('pl.pretty')
dofile('src/parser.lua')

local input = [[
CREATE TABLE students (sid int primary key, name varchar(20), major varchar(4));
INSERT INTO students (sid, major, name) values (101062116, "CS", "Jack Force");
INSERT INTO students values (101062124, "hydai", "CS");
SELECT * FROM Author;
SELECT bookId, title, pages, authorId, editorial FROM Book;
SELECT title FROM Book WHERE bookId > 5;
SELECT title FROM Book WHERE bookId = 1;
SELECT bookId FROM Book WHERE title = "Computer Science";
SELECT title FROM Book WHERE pages > 100 AND editorial = 'Prentice Hall';
SELECT b.title FROM Book AS b WHERE pages > 100 AND editorial = 'Prentice Hall';
SELECT b.* FROM Book AS b WHERE authorId = 1 OR pages < 200;
SELECT * FROM Book WHERE authorId = 1 OR title = "Network Programming";
SELECT * FROM Book WHERE authorId = 1 OR pages < 200;
SELECT bookId, title, pages, name FROM Book, Author WHERE Book.authorId = Author.authorId;
SELECT b.* FROM Book AS b, Author AS a WHERE b.authorId = a.authorId AND a.name = 'Michael Crichton';
SELECT a.name, title FROM Book, Author AS a WHERE Book.authorId = a.authorId AND Book.pages > 200;
SELECT a.name FROM Author AS a, Book AS b WHERE a.authorId = b.authorId AND b.title = 'Star Wars';
SELECT a.name, b.title FROM Author AS a, Book AS b WHERE a.authorId = b.authorId AND a.nationality = 'Taiwan';


]]


local results = parseCommand(input)
pretty.dump(results)

results = parseCommand(nil, "input.txt")
pretty.dump(results)