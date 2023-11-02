# 10/26/2023 to 11/02/2023: Project 3 - Mini-Shameemah 👩🏾
## Reflections #
My focus this week was on completing project 3! This was an incredibly fun project. After a ton of experimentation and fine-tuning, I finally developed a digital twin that I was proud of, using OpenAI's chat-gpt 4 and the ZeroWidth platform.

This YouTube video provides the details on the process that I went through, and the final results of the project:

[![3 minute YouTube video explainining my Digital Twin project](https://img.youtube.com/vi/yt8-r5sPkYI/0.jpg)](https://www.youtube.com/watch?v=yt8-r5sPkYI)


### 💡 Through this exploration I learned: ###
- how to fine-tune an LLM for a specific use case
- the importance of Retrieval Augmented Generation, context length, and tokens
- how to iterate on knowledge sets to improve intelligence
- how to evaluate an LLM
- how to fine-tune prompts to receive accurate results

## Speculations ##
I have no doubt that LLMs are going to significantly change the kinds of products and experiences we develop, by giving us the oppotunity to design more antropomorphic experiences. Additionally, LLMs such as chat-gpt now have the ability to spit out lines of code for entire functionalities. These technologies are going to drastically change the way we develop technological products. Given this, it is important for us to recognize that these LLMs are only as good as the knowledge sets they are trained on and the fine-tuning process. It is important for us to think about the ethical implications they may have in the areas of misrepresentation and misinformation. 

# 10/19/2023 to 10/26/2023: Wrapping up Project 2 and kicking off Project 3!
## Reflections #
This week was spent wrapping up project 2 and kicking off project 3! 

For project 2, we received a lot of useful feedback form our classmates that I incorporated into my personal project report. You can view the completed report [here](https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_26/Project2_Shameemah.pdf).

Moving on to project 3! Unfortunately, I missed class on Monday due to being sick, which means I missed the introduction to this project. However, the professors were very accommodating and the session was recorded, so I plan to spend a lot of time in the next few days getting up to speed and starting the project. To kickstart this process, I started off by setting up my ZeroWidth account and watching the sample video provided on prototyping a better food delivery ordering experience with large language models.

<img alt="ZeroWidth account setup" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_26/zerowidth_workbench.png">
<img alt="Video on prototyping a better food delivery ordering experience with large language models" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_26/zerowidth_video.png">

So far, my understanding of ZeroWidth workbench is that it goes beyond algorithms by providing a platform that allows users to strategically apply AI to different use cases, and to create user-centric solutions. The video on prototyping a better food delivery ordering experience with large language models showcased this incredibly well, and sparked a lot of thought on what other possible use cases I could apply this technology to. I am very excited to get this project going! 

### 💡 Through this exploration I learned: ###
- what ZeroWidth is and the toolkit the platform provides for designing AI
- how to get started with ZeroWidth

## Speculations ##
A lot of the time, when we hear about LLMs, the conversation centers around the algorithms and how they are trained. And though that's incredibly important, it's sometimes difficult to understand how we as designers can make use of these emerging technologies in our design practices. The demo by Zerowidth showcases this incredibly well! The idea that we can provide instructions, modify inputs and outputs, and adapt these LLMs to a variety of use cases is such a powerful tool. I'm particularly interested in figuring out how can I incorporate this tool into my design process and how it can beneficial in creating quick prototypes.

# 10/12/2023 to 10/19/2023: Pet Health Monitor Final Submission
## Reflections #
This week, our team focused on completing project 2! My main focus for this week was using the input received from the Pulse Sensor to calculate the BPM, and to publish that BPM to Particle Device Cloud in order to be outputed on the devices connected to the 2nd photon. I successfully accomplished this, and the video below is a quick overview of what my group and I accomplished for this project:

[![3 minute YouTube video explainining our Pet Health Monitor for Project 2](https://img.youtube.com/vi/z3OieXuTjrM/0.jpg)](https://www.youtube.com/watch?v=z3OieXuTjrM)

### 💡 Through this exploration I learned: ###
- how to read the signals from a pulse sensor
- how to use the data received from an input sesnor to derive further information through calculations 
- how to get 2 Photons to commmunicate with each other
- how to publish data to the Particle Device Cloud
- how to incorporate ML into a Particle Photon project using Edge Impulse
- how to work virtually with a team using collaborative tools such as Slack and Figma 

## Speculations ##
Speculations and future explorations are covered in detail in the video attached. I look forward to exploring this technology more deeply!

# 10/05/2023 to 10/12/2023: Pet Wearables - Pulse Sensor Experimentation
## Reflections #
We kicked off our group project for Project 2 last week. Our group is working on creating a pet wearable that tracks a pet's pulse, calculates Heart Rate Variability (HRV), and alerts the owner if there's a discrepancy in their normal heart rate, which could be an indicator of underlying illness. 

This week, my focus was on getting the pulse sensor to work, and being able to read some output from it. The pulse sensor we purchased is the Pulse Sensor Amped seen [here](https://www.adafruit.com/product/1093).

<img alt="A photo of the Pulse Sensor Amped sensor packaging" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_12/pulsesensor.JPG">

The circuit used for the pulse sensor is incredibly simple. I connected my Photon 2 to a breadboard and made the following connections: 

- Black wire from the pulse sensor to the Photon ground pin
- Red wire from pulse sensor to the Photon 3.3v pin
- Purple wire from pulse sensor to the Photon A0 pin

<img alt="Photo of connections described above" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_12/breadboardpulsesensor.JPG">

And voila! A green light on the Pulse Sensor indicated that it was connected successfully. 

<img alt="Photo of Pulse Sensor succcessfully connected" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_12/pulsesensorconnected.JPG">

Following the succcessful connection, I wrote some code to blink the built-in D7 LED on the Photon 2 to the rhythm of my pulse. Due to the sensitivity of the sensor, I had to play around with the threshold value in order to get the best reading for my pulse. I managed to get this working successfully which was a very exciting moment for me. :)

<img alt="Screenshot of code written to blink LED light according to pulse" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_12/VScodepulsesensor.png">

For nexts steps, my goal is to modify this code to calculate and output the HRV using the pulse signals from the sensor. After this, my team and I will work to connect this code to an output device such as a screen display and vibration device connected to another Photon 2. 

### 💡 Through this exploration I learned: ###
- how to connect a pulse sensor to the Photon 2
- how to read output from the pulse sensor
- how to debug code in VS code

## Speculations ##
I think a good ML exercise for this project will be to train a model to be able to predict a pet's overall health status based on their HRV. I will be considering this as part of my explorations in the next few days. 

# 09/28/2023 to 10/05/2023: Project 2 - Teamwork! 
## Reflections #
We kicked off project 2 this week! I joined the team that is focused on creating pet wearables. Our main focus as a team this week was coordinating how we plan to tackle group work and communication, defining our project specification, and dividing up the work for individual explorations. 

The main tool we are using for collaboration is Figma and Slack. I created a Figma page for us to document our ideas and coordinate on group submissions. 

<img alt="Figma playground for team pet wearables" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_05/figma.png">
<img alt="Figma documentation on pet wearables resources" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_05/figma1.jpg">
<img alt="Figma documentation on HRV resources" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_05/figma2.jpg">
<img alt="Team slack conversation" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_10_05/slack.png">

We divided up the explorations so that each team member has the chance to work contribute individually to the success of the team. The responsibilities for each team member for the next week are:
- Motion sensor exploration - Fareha
- Pulse sensor exploration - Shameemah
- Vibration output - Cynthia
- Display output - Reina

The goal is that next week, we should have a better idea of what elements are working and how to combine them to create the complete device.

### 💡 Through this exploration I learned: ###
- how to collaborate using tools like Figma and Slack 

## Speculations ##
No speculations this week. More to come next week! :) 

# 09/21/2023 to 09/28/2023: Photon 2 and Edge AI Kit Experimentation
## Reflections #
I spent some time this week experimenting with the Photon 2 microcontroller and the edge AI kit. 

In the tutorial provided by Professor Sudhu, I connected the Photon 2 microcontroller to the breadboard, included an external LED, a resistor, and connections between the microcontroller and the LED. I then went ahead to run the sample code provided and ta-da! The results of this experiment can be seen in the Gif below. 

<img alt="Screenshot of the code run for the blinking light experiment" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_28/blink_code.png">
<img alt="GIF showing alternating blinking lights on Photon 2 and external LED" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_28/tmpMovie.gif">

One small thing that confused me, and my classmate Divya, was using 'D17' for the input instead of 'SCK' or 'S2,' which is how it is labeled on the Photon 2 microcontroller. We did a little experiment to see if the code will still run successfully if we replaced 'D17' with 'SCK' or 'S2', and it did! (A little FYI for anyone else who was thrown off by that). 

In class on Monday, we also spent some time coming up with ideas for Project 2. Our group was tasked with coming up with ideas around community. At the end of the ideation, the 3 main ideas we came up with were:
- Collaborative song making using a shared instrument
- A device that aids the homeless community in finding warming/cooling centers
- A device that aids in building stronger connections in relationships

<img alt="A photo of team 'Silva Spectrum' coming up with ideas for Project 2" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_28/team_ideation.jpg">

Following this, we had the opportunity to vote for our top 3 interests across the board. My top 3 picks were:
- Developing an interactive social game with tangible elements for alzheimer and demential patients
- Mindful meditations: an interactive flower guide for stress relief and color therapy tracking
- Enhancing interpersonal connections: exploring subtle communication tools for friendships and relationships

I am super excited about this project and cannot wait to see what our cohort comes up with!

Finally, we had a guest lecture by Adrian Freed which was incredibly insightful. He introduced us to the world of electronic textiles. This was honestly a mindblowing lecture because I had absolutely no idea that such a thing existed. I spent some time reading on Eeonyx, which is a company that has led the development of conductive textiles, powders, and inks over many years. This lecture opened up a whole new world of possibilties for me, and I'm hoping to spend some more time deepdiving into this area. 

### 💡 Through this exploration I learned: ###
- the basics of circuits 
- how to create a basic connection using a Photon 2 microcontroller, a bread board, and an external LED
- potential problems that this technology can solve
- e-textiles and their capabilities

## Speculations ##
It is becoming incredibly clear to me that we are capable of building incredibly powerful machines by combining AI and IoT. I did some research and discovered that there is a term for this intersection of AI and IoT, called artificial intelligence of things (AIoT). I will be doing some more digging into this area in the next week, in hopes to discover some ways that we may be able to incorporate this into project 2.

# 09/14/2023 to 09/21/2023: Photon 2 Setup
## Reflections #

This week, I wrapped up project 1 and we're kicking off electronics with the Photon 2! :D We followed a tutorial provided by Professor Sudhu,which explained how to connect the Photon 2 to a Wi-Fi network (MAC address in screenshot below covered for security purposes).

<img alt="Screenshot of me Particle Web IDE printing MAC address" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_21/particle_mac.png">
<img alt="Photo of Photon 2 connected" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_21/photon2.JPG">

The process was fairly straightforward, and I didn't bump into any hiccups along the way. However, I feel like I'm lacking a basic understanding of circuits, so I'll be spending some time this weekend trying to understand that a little better. 

### 💡 Through this exploration I learned: ###
- how to connect a Photon 2 microcontroller to a Wi-Fi network 

## Speculations ##

Honestly not quite sure what to think yet because this is a whole new world for me. I'll hve more to say once I get a better hang of what this technology is capable of.

# 09/07/2023 to 09/14/2023: Project 1 - Parametric Slow Feeder
## Reflections ##

For project 1, I chose to challenge myself to create a parametric slow feeder from scratch. A slow feeder is a bowl with ridges that make it harder for pets to eat quickly. I have a 4lb toy poodle who eats incredibly fast, which has led to health issues in the past. Due to her small size, it's very difficult to find a slow feeder that is small but also intense enough to slow her feeding down drastically. This project gave me the perfect opportunity to try and tackle this issue myself.  

The video below provides a 3 minute summary on the problem I chose to tackle, solution developed, and potential advancements for the future.


[![3 minute YouTube video explaining my parametric slow feeder project](https://img.youtube.com/vi/Hcv1sVSC-Ck/0.jpg)](https://youtu.be/Hcv1sVSC-Ck)

The photos below are the final 3D printed model.

<img alt="Photo of 3D printed slow feeder from a perspective view" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_14/parametricfeeder_perspective.JPG">
<img alt="Photo of 3D printed slow feeder from the top view" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_14/parametricfeeder_topview.JPG">

This was a very fun project for me that allowed me to get a good grasp of grasshopper and rhino, but also develop the system thinking skills that go into parametric and computational design.

### 💡 Through this exploration I learned: ###
- how to create a parametric model using Grasshoper and Rhino
- how to create a quick video using Adobe Premiere Rush
- how to 3D print on the Ultimaker 3D printer
- system thinking 

## Speculations ##

As an advancement to this project, I am interested in understanding how Machine Learning can make this solution smarter. For example, is it possible to train a model to be able to predict the perfect bowl size and slow feeder intensity for a pet based on their breed and weight?

I also intend on iterating on this project by providing users with the option to select different patterns for the ridges in the bowl. Lastly, I intend on 3D printing the bowl and testing it on my dog to see if it effectively slows down her eating. 


# 08/31/2023 to 09/07/2023: Project 1 Pre-Project Exploration - Self-Guided Study
## Reflections ##

This week, my focus was on understanding the basics of Grasshopper and how it interacts with Rhino. Through last week's exploration, it was clear to me that I needed to understand Grasshopper at a foundational level before I could deep dive into the worked example provided. In order to do this, I registered for a [Udemy course that covers Parametric Design with Grasshopper from beginner to advanced levels](https://www.udemy.com/course/parametric-design-with-grasshopper-full-beginner-to-advanced/). 

<img alt="Screenshot of Udemy Learning Dashboard" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_07/udemy_course.png">

https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/assets/16790809/75e7b610-a621-4369-88da-99bf07929ce7

So far, I have found this course incredibly beneficial. Though I am still in the beginner level of the course, I now have a better understanding of some basic Grasshopper components, the relationship between Grasshopper and Rhino, and how to make very simple parametric designs using various inputs. 

### 💡 Through this exploration I learned: ###
- various Grasshopper components such as points, lines, curves, vectors, panels, etc., and how they work
- how to transform geometries using move, rotation, mirror, etc.
- how to link an existing Rhino model to a Grasshopper component
- how to make a model in Grasshopper available in Rhino using 'bake'
- how to make a model parametric using inputs such as the number slider, panel, md slider, etc. 

## Speculations ##

By the end of this Udemy crash course, I hope to have gained enough knowledge to be able to make a more advanced parametric model, and perhaps create my own version of the cellphone stand from scratch. I'm still curious to understand where AI can be plugged into this process and what that means for computational design as a whole. 

# 08/24/2023 to 08/31/2023: Project 1 Pre-Project Exploration: A Cell Phone Stand
## Reflections ##

This week, I spent some time playing around with the Rhino and Grasshopper files provided for the pre-project exploration, in order to understand the different facets, and how the 2 work together. The class was given a worked example of computational design for a cell phone stand. After some time of tinkering with these files, and the Rhino and Grasshopper interfaces, I managed to find the different phone size metrics in the grasshoper file, and changed the values in the sliders to see how it impacted the phone stand model. 

Following this, I measured my phone length, width, and thickness, and went ahead to modify the values in grasshoper to match my measurements, with the assumption that this would generate a phone stand that fits my phone. 

<img alt="Photo of me measuring the thickness of my iPhone 13 pro" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_08_31/phonethickness.JPG">
<img alt="Screenshot of Grasshopper with modified phone metrics" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_08_31/adjustingmetricsrhino.png">

Initially, I experienced some difficulty with exporting the Rhino file to Adobe Illustrator; the exported file was blank. However, after some troubleshooting and some help from TJ, I learned that this issue was due to the origin of the drawings being offset way off the page. After modifying the 'Move Off Mode' value in Grasshopper, I was able to export my file successfully and prepare my file for laser cutting! 

<img alt="Adobe illustrator file with phone stand 2d drawings" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_08_31/illustratorfile.png">

The computer systems in the Jacobs Hall Makerspace were reset recently, so the laser cutting settings were a little off. I had to tinker with various settings, and make multiple test cuts in order to finally get the laser to cut through my piece of wood. With some help from Gary and Sudhu, I was able to make the cut successfully (albeit, with some very burnt edges). However, through this process I came to understand the different factors that impact the laser cutting process. If I had more time, I would have liked to try out different settings in order to get the perfect cut. Nonetheless, I was able to cut successfully, and my phone stand fit my phone perfectly! 

<img alt="Laser cut wooden phone stand wth iPhone 13 pro placed in the phone stand" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_08_31/phonestand.JPG">

### 💡 Through this exploration I learned: ###
- how Rhino and grasshopper work together to create parametric and computational models
- some common issues that may arise with exporting a Rhino drawing to Adobe Illustrator, and how to resolve them
- how to prepare a file for laser cutting
- how to use the laser cutter
- the factors that influence the success of a laser cut

## Speculations ##

Given that computational design is a completely new field for me, there is so much to learn! I am curious to learn more about potential applications, and how I can apply this to some of the problems I am interested in solving around accessibility and inclusion. I am also curious to understand the ways in which we can merge computational design with powerful technologies like AI, sensing, and AR/VR.



