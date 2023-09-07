# 08/31/2023 to 09/07/2023: Project 1 Pre-Project Exploratio - Self-Guided Study
## Reflections ##

This week, my focus was on understanding the basics of Grasshopper and how it interacts with Rhino. Through last week's exploration, it was clear to me that I needed to understand Grasshopper at a foundational level before I could deep dive into the worked example provided. In order to do this, I registered for a [Udemy course that covers Parametric Design with Grasshopper from beginner to advanced levels](https://www.udemy.com/course/parametric-design-with-grasshopper-full-beginner-to-advanced/). 

<img alt="Screenshot of Udemy Learning Dashboard" src="https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/blob/main/weekly-reports/2023_09_07/udemy_course.png">

https://github.com/Berkeley-MDes/tdf-fa23-Shameemah/assets/16790809/75e7b610-a621-4369-88da-99bf07929ce7

So far, I have found this course incredibly beneficial. Though I am still in the beginner level of the course, I now have a better understanding of some basic Grasshopper components, the relationship between Grasshopper and Rhino, and how to make very simple paramteric designs using various inputs. 

### 💡 Through this exploration I learned: ###
- various Grasshopper components such as points, lines, curves, vectors, panels, etc., and how they work
- how to transform geometries using move, rotation, mirror, etc.
- how to link an existing Rhino model to a Grasshopper component
- how to make a model in Grasshopper available in Rhino using 'bake'
- how to make a model parametric using inputs such as the number slider 

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



