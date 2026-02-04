## 1.Explain what OpenCV is and its role in robot vision.
#### OpenCV, an open-source computer vision and machine learning software library, provides a common infrastructure for computer vision applications and accelerates the adoption of machine perception in commercial products.  With over 2500 optimised algorithms encompassing both classic and state-of-the-art computer vision and machine learning techniques, OpenCV offers a wide range of functionalities.  These include face and object detection, video action classification, camera and object tracking, 3D model extraction, stereo camera point cloud generation, image stitching for high-resolution scene creation, image database similarity searches, red-eye removal, eye tracking, scenery recognition, and augmented reality marker overlay.  OpenCV boasts a large user community of hundreds of thousands and boasts monthly downloads exceeding 40 million.  Its extensive use spans companies, research groups, hobbyists, and even governmental bodies like ISRO, DRDO and NASA.It has C++, Python, Java and MATLAB interfaces and supports Windows, Linux, Android and Mac OS. OpenCV is used to take and manipulate real time input and feed it to the robot's processing unit, which stores a code with all the logic and pins of the microcontroller. We can use many of OpenCv library's functions to use real time visual data and perform operations on it like recognizing and tracking objects, face/feature detection, navigating and mapping, colour based tracking, etc. OpenCV is a very useful and important piece of software in today's world and it has helped users to easily and deal with visual input continuously unlike the cpu intensive code that was used before.


## 2. Basic image processing tasks.
#### There are many basic image processing tasks that OpenCV offer:
- **Reading Images**: Load an image into a NumPy array using OpenCV’s **cv2.imread()** function.
- **Writing Images**: Save images to disk using **cv2.imwrite()**.
- **Showing Images**: Display images in a window using **cv2.imshow()**.
- **Resizing**: Scale or shrink images using **cv2.resize()**.
- **Cropping**: Extract a specific region of interest (ROI) using NumPy slicing.
- **Rotation**: Flip or rotate images with **cv2.rotate()** or custom rotation matrices.
- **Colour Conversion**: Convert between colour spaces like BGR to Grayscale or BGR to RGB using **cv2.cvtColor()**.
- **Smoothing/Blurring**: Smooth images with **cv2.GaussianBlur()**.
- **Edge Detection**: Detect outlines using the Canny Edge Detection algorithm with **cv2.Canny()**.
- **Thresholding**: Convert images to binary (black and white) using **cv2.threshold()** to separate foreground from background.
- **Morphological Operations**: Perform erosion and dilation to remove noise or join broken parts of an object.
- **Drawing**: Add lines, circles, and text to images using functions like **cv2.line()** and **cv2.putText()**.
- **Contours**: Detect and draw the boundaries of shapes within an image using **cv2.findContours()**.
- **Histograms**: Analyse pixel intensity distributions with **cv2.calcHist()**.


## 3. Exploring Computer vision concepts.
#### Building on basic image processing, Computer Vision (CV) with OpenCV shifts the focus from merely enhancing images to understanding their content.  This field allows machines to derive meaningful information from visual data and take specific actions like navigating a self-driving car or diagnosing medical conditions.
#### Core Computer Vision Concepts include:
- **Feature Extraction**:  This involves identifying key visual elements such as edges textures and patterns. OpenCV uses descriptors like SIFT or ORB to find unique “keypoints” that can track objects across different frames or angles.
- **Object Detection**: This is the process of locating and identifying specific objects within an image.  This often involves drawing bounding boxes around detected items using algorithms like Haar Cascades or deep learning models such as YOLO and SSD.
- **Image Segmentation**: This partitions an image into multiple regions based on pixel characteristics. Semantic Segmentation goes further by classifying every individual pixel, enabling a computer to distinguish between “road”, “car” and “building”.
- **3D Reconstruction**: This involves extracting 3D world information from 2D images which is often used in Stereo Vision to calculate depth.
#### Advanced Techniques in OpenCV
**Video Analysis**:  This extends beyond static images to process live feeds.  It involves Object Tracking, which monitors movement across frames, and Optical Flow, which estimates the motion of objects relative to the camera.
**Template Matching**: This technique searches for a specific “template” image within a larger input image by sliding the template across every possible patch.
**Deep Learning (DNN Module)**: OpenCV’s dnn module enables loading and running pre-trained models from frameworks like TensorFlow and PyTorch for high-accuracy classification and detection.
**Pose Estimation**: This identifies body joints like elbows and knees to form a skeleton, which is crucial for fitness tracking and gesture-controlled interfaces.

