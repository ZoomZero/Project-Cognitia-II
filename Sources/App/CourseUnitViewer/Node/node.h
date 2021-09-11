#ifndef NODE_H
#define NODE_H

#include <QtWidgets>

class Edge;
class CourseUnitViewer;
class CourseUnit;

#define DEFAULT_ATT_FAC 300
#define DEFAULT_REP_FAC 0.1
#define DEFAULT_MASS_FAC 10
#define EPSILON 0.2

class Node : public QGraphicsItem
{

public:

    // Types
    //--------------------------------------
    enum { Type = UserType + 1 };
    //--------------------------------------

public:

    // Constructor
    //--------------------------------------
    Node(CourseUnitViewer *viewer);
    ~Node();
    //--------------------------------------

public:

    // public functions
    //--------------------------------------
    void addEdge(Edge *edge);
    QList<Edge *> edges() const;
    int type() const override { return Type; }
    void calculateForces();
    QRectF boundingRect() const override;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void removeEdge(Edge * e);
    bool hasEdgeToNode(Node * nd);
    void addInSkill(QString name, int lev);
    void addOutSkill(QString name, int lev);
    void removeInSkill(QString name);
    void removeOutSkill(QString name);
	const QMap<QString, int>& getInSkills() const;
	const QMap<QString, int>& getOutSkills() const;
	QString getName();
	void setName(QString name);
	QString getFile() const;
	void setFile(QString file);
	void setColor(QColor color = Qt::blue);
	void clearSkills();
	QColor getColor();
	QString getDescription();
	void setDescription(QString str);
    //--------------------------------------

protected:

    // protected functions
    //--------------------------------------
    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    //--------------------------------------

private:

    // private functions
    //--------------------------------------
    void drawSkills(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QString rebuildStr(QString str);
    //--------------------------------------

private:

    // Fields
    //--------------------------------------
    QList<Edge *> edgeList;
    CourseUnitViewer *graph;
    QMap<QString, int> inSkills;
    QMap<QString, int> outSkills;
    QString file;
    QString name;
    QString description;
    QColor color = Qt::lightGray;
    //--------------------------------------
};

// global functions
//--------------------------------------
void fromCourseUnitToNode(CourseUnit * cu, Node * nd);
void fromNodeToCourseUnit(Node * nd, CourseUnit * cu);
//--------------------------------------

#endif
