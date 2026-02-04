<h1 align="center">YOLO Models</h1>


## 1. What does YOLO do?
#### YOLO (You Only Look Once) is a revolutionary, real-time object detection algorithm that can identify and locate multiple objects within an image or video in a single pass of a neural network. 
#### Some of its key functions are :
- **Real-Time Processing** : Unlike earlier, slower methods (like the R-CNN family) that required multiple stages of processing, YOLO uses a single, streamlined convolutional neural network (CNN) to predict bounding boxes and class probabilities simultaneously. This makes it incredibly fast, often processing images at high frame rates suitable for real-time applications like autonomous driving and video surveillance.
- **Bounding Box Prediction** : For each detected object, YOLO draws a bounding box, which is a rectangular outline that precisely indicates the object's location and scale within the image.
- **Classification** : Alongside location, it assigns a class label (e.g., "person," "car," "dog") and a confidence score to each bounding box, indicating how certain the model is about its prediction.
- **Global Context** : YOLO "sees" the entire image at once when making predictions, allowing it to implicitly encode contextual information and significantly reduce the number of false positives in the background compared to methods that analyze only local regions.

#### Working of YOLO models:
- **Grid Division** : The input image is divided into a grid (e.g., 7x7 cells).
- **Feature Extraction** : A deep CNN processes the entire image to extract relevant visual features.
- **Prediction per Cell** : Each grid cell is responsible for detecting objects whose center falls within it. Each cell predicts several potential bounding boxes, a confidence score for each, and the conditional class probabilities.
- **Non-Maximum Suppression (NMS)** : This post-processing step filters the numerous overlapping and redundant bounding boxes, leaving only the most confident and accurate detection for each unique object. Recent versions like YOLOv10 and YOLO26 are pioneering NMS-free training for even greater efficiency.

#### Applications Of YOLO models:
**Due to its speed and accuracy, YOLO is used across various industries:** 
- **Autonomous Driving** : Detecting pedestrians, vehicles, and obstacles in real-time.
- **Security Systems** : Monitoring activities and detecting intruders in surveillance footage.
- **Retail Analytics** : Managing inventory and analyzing customer behavior.
- **Healthcare** : Assisting in medical imaging to detect anomalies like tumors.
- **Robotics** : Enabling robots to identify and interact with objects in an assembly line or environment.


## 2. The Difference between detection and classification:
#### Object detection and classification are two fundamental tasks in computer vision.  While they both analyse visual data, their purposes and approaches differ.  Although they share similarities, their objectives and methodologies are distinct.

**Object Detection**: This task involves identifying and pinpointing objects within an image or video. It goes beyond simple classification by not only recognising the presence of objects but also precisely locating them within the visual data. Object detection effectively combines classification and localisation. The process consists of two key steps: classification and localisation. During classification, a machine learning model is trained to recognise various object classes. This training allows the model to assign labels based on visual characteristics. In localisation, the model then uses bounding boxes to specify the exact position of each detected object within the image. Object detection has a wide range of applications across various fields, including autonomous driving, surveillance systems, robotics and image understanding.

**Classification** : Classification, on the other hand, involves assigning a label or category to an entire image or a specific region within it.  This task determines the presence or absence of particular objects or classes within the visual data.  Classification is a fundamental machine learning task and a building block for many other computer vision applications.  In image classification, a model is trained on a labelled dataset to learn patterns and features associated with different classes.  Once trained, it predicts the class label of an unseen image by analysing its visual content.  Image classification is widely used in applications such as content-based image retrieval spam detection medical diagnosis and sentiment analysis.

**Object Detection Vs. Classification** : 
- Object detection involves both identifying objects and precisely localizing them within the image or video, whereas classification focuses on assigning labels to images or specific regions.
- Object detection utilizes bounding boxes to mark the location of detected objects, while classification does not provide information about object location.
- Object detection is more complex than classification due to the additional task of localization.
- Object detection requires more computational resources and specialized algorithms compared to classification.

  | Aspect | Classification | Object Detection |
  | --- | --- | --- |
  | Primary Goal | 	Identify the main subject of an image. | Localize and categorize all known objects within the image |
  | Output | A single class label and confidence score. | Multiple bounding scores, boxes and labels. |
  | Model Output Layer | Uses a Softmax layer to predict a class probability distribution. | Uses a linear function to predict both class and box coordinates simultaneously. |
  | Training Data | Images must have a single label like "cat" | Requires images with precise bounding box coordinates for each object. |
  | Compute Cost | Cost is lower, processes the image as a whole. | Cost is higher, must predict multiple spatial parameters for each object. |
  | Complexity | Low complexity, focuses on global features | High complexity, combines classification and localization. |

