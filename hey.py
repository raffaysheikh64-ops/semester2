import requests
import json

# 1. Replace this with your actual n8n Test Webhook URL
webhook_url = "http://localhost:5678/webhook-test/student-admission"

# 2. This is the student data (The "Payload")
# Test 1: Should go to 'Priority' and Discord
student_data = {
    "name": "Ali",
    "major": "Computer Science",
    "score": 95
}

# Test 2: (Optional) Change major to "Business" to see it go to 'Standard'
# student_data = {
#     "name": "Hassan",
#     "major": "Business",
#     "score": 82
# }

try:
    # 3. Send the POST request
    response = requests.post(
        webhook_url, 
        data=json.dumps(student_data),
        headers={'Content-Type': 'application/json'}
    )

    # 4. Check if it worked
    if response.status_code == 200:
        print("✅ Data sent successfully, brother!")
        print("Response from n8n:", response.text)
    else:
        print(f"❌ Failed to send. Status Code: {response.status_code}")
        print("Error:", response.text)

except Exception as e:
    print(f"❌ Connection Error: {e}")