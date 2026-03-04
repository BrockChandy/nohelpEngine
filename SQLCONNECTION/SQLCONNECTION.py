import mysql.connector

# 1. Establish the connection
db = mysql.connector.connect(
    host="localhost",
    user="root",
    password="BROCK",
    database="playerDatabase"
)

cursor = db.cursor()

# 2. Execute the query
query = "SELECT id, firstname, lastname, playerposition, playerrating, teamname, kitnumber, playerCountry FROM players where teamname = 'Crystal Palace' and playerposition = 'CM'"
cursor.execute(query)

# 3. Fetch and print results
results = cursor.fetchall()
 
for result in results:
    id, firstname, lastname, playerposition, playerrating, teamname, kitnumber, playerCountry = result

    print(f"{firstname, lastname, playerposition, playerrating, kitnumber, playerCountry}")

#for row in results:
    #print(row)

# 4. Clean up
cursor.close()
db.close()