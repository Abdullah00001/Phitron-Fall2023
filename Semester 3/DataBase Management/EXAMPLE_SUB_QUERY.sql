USE OFFICE;
SELECT 
    *
FROM
    EMPLOYEES;
SELECT *
FROM EMPLOYEES
WHERE SALARY < (SELECT SALARY
        FROM EMPLOYEES
        WHERE EMPLOYEE_ID = 110);

-- =========================================================== 

SELECT 
    FIRST_NAME, EMAIL, JOB_ID
FROM
    EMPLOYEES
WHERE
    JOB_ID = (SELECT 
            JOB_ID
        FROM
            EMPLOYEES
        WHERE
            FIRST_NAME = 'BRUCE');

-- ==========================================================================

SELECT 
    JOB_ID, JOB_TITLE, MIN_SALARY
FROM
    JOBS
WHERE
    MIN_SALARY <= (SELECT 
            SALARY
        FROM
            EMPLOYEES
        WHERE
            FIRST_NAME = 'NANCY');
            
            
-- ====FIND THE EMPLOYEES WHO ARES WORK ON SPECIFIC DEPARTMENT WITH THE HELP OF SUB QUERY ======= 
SELECT 
    EMPLOYEE_ID, FIRST_NAME, LAST_NAME, DEPARTMENT_ID
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = (SELECT 
            DEPARTMENT_ID
        FROM
            DEPARTMENTS
        WHERE
            DEPARTMENT_NAME = 'MARKETING');
            
            
-- ====FIND THE AVERAGE SALARY WITH THE HELP OF SUB QUERY ======= 
SELECT 
    AVG(SALARY)
FROM
    EMPLOYEES
WHERE
    DEPARTMENT_ID = (SELECT 
            DEPARTMENT_ID
        FROM
            DEPARTMENTS
        WHERE
            DEPARTMENT_NAME = 'MARKETING');


-- ====================================================================


SELECT MAX(SALARY)
FROM EMPLOYEES
WHERE JOB_ID=(
SELECT JOB_ID
FROM JOBS
WHERE JOB_TITLE='PROGRAMMER'
);

-- =====================================================================


SELECT COUNT(FIRST_NAME)
FROM EMPLOYEES
WHERE DEPARTMENT_ID=(
SELECT DEPARTMENT_ID
FROM DEPARTMENTS
WHERE DEPARTMENT_NAME='SALES'
);

-- =========================================================


SELECT SUM(SALARY)
FROM EMPLOYEES
WHERE JOB_ID=(
SELECT JOB_ID
FROM JOBS
WHERE JOB_TITLE='PROGRAMMER'
); 