# Submission Date: 16th of September 2020 11:59 PM
# Viva on 17th September 2020 7:00 PM - 12:00 PM

### _*Plagiarism is highly discouraged, if found, all the parties will be awarded with zero (0) marks without any discrimation between the source and the destination.*_


This project is about to analyse a real-time server’s transactional outbound messages which is attacked by a  spambot to send thousands of spam emails. Along with this description, a file is also provided, which consists of the actual messages sent by the spambot. 

## What is a spambot?
Speaking generally, bots are computer programs that execute repetitive tasks, and they usually operate over the Internet. A spam bot is a specific type of bot that sends (or helps with sending) spam messages. A spam bot may also post spam in various places where users interact online, such as social media platforms or forums.
Spam is any inappropriate or unwelcome message that's pushed out to a large number of users. Usually, spam involves unwanted product advertisements, irrelevant backlinks (to attempt to get the linked website higher in search engine results), or more sinister things like scams or malware downloads. Spam can also be any content that's irrelevant and delivered in large volumes.
For more information about the spambots, please visit *https://www.cloudflare.com/learning/bots/what-is-a-spambot/*

# The Data
The file which is provided with this description  is a comma separated file named “Server-Outbound-Messages.csv”. The file carries data which are the attempts of the spambot to send bulk emails to random recipients. The description of the fields of the data is given below:

Message ID: 		It is the unique ID assigned to each message
Status: 	This field represents the status of each message after the email 		sending action
Email address: 	This is the email address to which the email was aimed
Subject: 	This is the subject of the email
Date and time: 	It is the timestamp field, it includes date, GMT time at which email 		was sent and the difference of time from the GMT based on the country location.
Bounce reason: 	In case if the email is not delivered to the desired recipient and 		was bounced back then this field represents the reason of that bounce.


# The Challenge:
Read the data file using c++ language and upload all the data in the linked list. Note  that you have to create a new structure for this data set which includes fields of each of the data items. Also note that date and time should be stored separately. 
After loading all the data into the linked list answer following questions:
    1. *[5 Points]* There are 10 distinct Status associated with each message, giving the count of each status. You have to write a separate function which will perform this count and return back the result in 2D dynamic array. The report of this 2D array should be printed by a separate function. Give a nice way of representation.
    2. *[5 Points]* Categorize recipients according to their domain. Print all the distinct domains of the email recipients. Note that yahoo.com and yahoo.co.uk are the same domain which belongs to yahoo.
    3. *[5 Points]* On 2-Sep-2020, how many emails were sent in total. What is the average time difference between the time of send operations
    4. *[5 Points]* How many emails were sent without any bounce
    5. *[5 Points]* Create a new linked list and store all the messages whose status are “Delivered” in it. Don’t forget to delete those messages from the first linked list.
