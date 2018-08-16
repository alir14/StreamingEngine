# StreamingEngine
Chronocast Engine using C++
Chronocast:
I had a chance to work on a project which was related to process and stream media. However, the streaming engine had tremendous issues in performance, code quality and structure of the application. 
Originally, the engine was written with HHVM language (I know, right!!!, silly choice of language for a streaming engine). 
Since the performance caused a lot of synch and load issues, I decided to refactor and write it with C++.

So the idea is to have an engine to run the logic to calculate time, monitor and select the right media for streaming. Moreover, In this project I use FFMPEG to process and chunk the media.
Finally, I am going to use NGINX rtmp as a service for the player to access the chunked media. 

Main components of the project are:
1)	Chronocast Framework: contains the common and base methods
2)	Chronocast Engine: contains the logic for Live and Scheduled media and use the framework methods to execute the stream process
3)	Stream Monitor Engine: contains functionality to record, clean and check chunk data and detect errors
