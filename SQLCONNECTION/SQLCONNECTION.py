# SQLCONNECTION.py
import mysql.connector

# 1. Establish the connection


cursor = db.cursor()

# 2. Execute the query
# query = "SELECT id, firstname, lastname, playerposition, playerrating, teamname, kitnumber, playerCountry FROM players where teamname = 'Crystal Palace' and playerposition = 'CM'"
query = "select * from Player"
cursor.execute(query)

# 3. Fetch and print results
results = cursor.fetchall()
 
 # output CSV output
for result in results:
    id, first_name, last_name, dob, nationality, height_ft, height_in, weight, preferred_foot, personality, position, team_id = result
    
    print(f"{first_name}, {last_name}, {position}, {weight}")

#for row in results:
    #print(row)

# 4. Clean up
cursor.close()
db.close()