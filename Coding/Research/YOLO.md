<h1 align="center">YOLO Models</h1>


## What does YOLO do?
#### YOLO (You Only Look Once) is a revolutionary, real-time object detection algorithm that can identify and locate multiple objects within an image or video in a single pass of a neural network. 
#### Some of its key functions are :
- **Real-Time Processing** : Unlike earlier, slower methods (like the R-CNN family) that required multiple stages of processing, YOLO uses a single, streamlined convolutional neural network (CNN) to predict bounding boxes and class probabilities simultaneously. This makes it incredibly fast, often processing images at high frame rates suitable for real-time applications like autonomous driving and video surveillance.
- **Bounding Box Prediction** : For each detected object, YOLO draws a bounding box, which is a rectangular outline that precisely indicates the object's location and scale within the image.
- **Classification** : Alongside location, it assigns a class label (e.g., "person," "car," "dog") and a confidence score to each bounding box, indicating how certain the model is about its prediction.
- **Global Context** : YOLO "sees" the entire image at once when making predictions, allowing it to implicitly encode contextual information and significantly reduce the number of false positives in the background compared to methods that analyze only local regions.
