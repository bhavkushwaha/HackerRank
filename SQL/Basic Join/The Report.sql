SELECT
  CASE
    WHEN GRADES.GRADE >= 8 THEN STUDENTS.NAME
    WHEN GRADES.GRADE < 8 THEN NULL
  END AS NAME,
  GRADES.GRADE,
  STUDENTS.MARKS
FROM STUDENTS
  LEFT JOIN GRADES ON STUDENTS.MARKS >= MIN_MARK
  AND STUDENTS.MARKS <= MAX_MARK
ORDER BY
  GRADES.GRADE DESC, STUDENTS.NAME ASC, STUDENTS.MARKS ASC;
