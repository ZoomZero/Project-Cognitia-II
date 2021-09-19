/*
 * FlowerScene.h
 *
 *  Created on: Aug 25, 2021
 *      Author: timat
 */

#ifndef APP_COURSEUNITVIEWER_FlowerScene_H_
#define APP_COURSEUNITVIEWER_FlowerScene_H_

#include <QtWidgets>

class Edge;
class Node;
class SkillsFlower;

class FlowerScene: public QGraphicsScene {
public:

	// Constructor and destructor
	//-----------------------------------
	FlowerScene(SkillsFlower * view);
	//-----------------------------------

private:

	// Fields
	//-----------------------------------
	SkillsFlower * view;
    //-----------------------------------

protected:

    // protected functions
    //-----------------------------------
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
	void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
	void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
	void drawBackground(QPainter *painter, const QRectF &rect) override;
	void dragEnterEvent(QGraphicsSceneDragDropEvent *event) override;
	void dragMoveEvent(QGraphicsSceneDragDropEvent *event) override;
	void dragLeaveEvent(QGraphicsSceneDragDropEvent *event) override;
	//-----------------------------------

};

#endif /* APP_COURSEUNITVIEWER_FlowerScene_H_ */