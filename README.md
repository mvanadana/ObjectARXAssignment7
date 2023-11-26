# ObjectARXAssignment7
## Add a Line Using User Input

This ObjectARX app has a function named 'inputLine'. It lets users draw a line in AutoCAD by inputting two points interactively. Here's how it works:

Gets the current AutoCAD database.
Retrieves the current space block (usually Model Space or Paper Space).
Asks the user to input the first point using 'acedGetPoint'.
If the first point is received, asks for the second point.
If both points are provided, makes a new AcDbLine object with those points.
Adds the new Line object to the current space block.
Closes the current space block and the Line object.




