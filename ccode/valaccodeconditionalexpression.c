/* valaccodeconditionalexpression.c generated by valac, the Vala compiler
 * generated from valaccodeconditionalexpression.vala, do not modify */

/* valaccodeconditionalexpression.vala
 *
 * Copyright (C) 2006-2008  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define VALA_TYPE_CCODE_NODE (vala_ccode_node_get_type ())
#define VALA_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNode))
#define VALA_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))
#define VALA_IS_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_NODE))
#define VALA_IS_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_NODE))
#define VALA_CCODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))

typedef struct _ValaCCodeNode ValaCCodeNode;
typedef struct _ValaCCodeNodeClass ValaCCodeNodeClass;
typedef struct _ValaCCodeNodePrivate ValaCCodeNodePrivate;

#define VALA_TYPE_CCODE_WRITER (vala_ccode_writer_get_type ())
#define VALA_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriter))
#define VALA_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))
#define VALA_IS_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_WRITER))
#define VALA_IS_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_WRITER))
#define VALA_CCODE_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))

typedef struct _ValaCCodeWriter ValaCCodeWriter;
typedef struct _ValaCCodeWriterClass ValaCCodeWriterClass;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
typedef struct _ValaCCodeExpressionPrivate ValaCCodeExpressionPrivate;

#define VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION (vala_ccode_conditional_expression_get_type ())
#define VALA_CCODE_CONDITIONAL_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION, ValaCCodeConditionalExpression))
#define VALA_CCODE_CONDITIONAL_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION, ValaCCodeConditionalExpressionClass))
#define VALA_IS_CCODE_CONDITIONAL_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION))
#define VALA_IS_CCODE_CONDITIONAL_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION))
#define VALA_CCODE_CONDITIONAL_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION, ValaCCodeConditionalExpressionClass))

typedef struct _ValaCCodeConditionalExpression ValaCCodeConditionalExpression;
typedef struct _ValaCCodeConditionalExpressionClass ValaCCodeConditionalExpressionClass;
typedef struct _ValaCCodeConditionalExpressionPrivate ValaCCodeConditionalExpressionPrivate;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeNodePrivate * priv;
};

struct _ValaCCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeNode *self);
	void (*write) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_declaration) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_combined) (ValaCCodeNode* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeExpression {
	ValaCCodeNode parent_instance;
	ValaCCodeExpressionPrivate * priv;
};

struct _ValaCCodeExpressionClass {
	ValaCCodeNodeClass parent_class;
	void (*write_inner) (ValaCCodeExpression* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeConditionalExpression {
	ValaCCodeExpression parent_instance;
	ValaCCodeConditionalExpressionPrivate * priv;
};

struct _ValaCCodeConditionalExpressionClass {
	ValaCCodeExpressionClass parent_class;
};

struct _ValaCCodeConditionalExpressionPrivate {
	ValaCCodeExpression* _condition;
	ValaCCodeExpression* _true_expression;
	ValaCCodeExpression* _false_expression;
};


static gpointer vala_ccode_conditional_expression_parent_class = NULL;

gpointer vala_ccode_node_ref (gpointer instance);
void vala_ccode_node_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_node (GValue* value, gpointer v_object);
void vala_value_take_ccode_node (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_node (const GValue* value);
GType vala_ccode_node_get_type (void) G_GNUC_CONST;
gpointer vala_ccode_writer_ref (gpointer instance);
void vala_ccode_writer_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_writer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_writer (GValue* value, gpointer v_object);
void vala_value_take_ccode_writer (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_writer (const GValue* value);
GType vala_ccode_writer_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
GType vala_ccode_conditional_expression_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_CONDITIONAL_EXPRESSION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION, ValaCCodeConditionalExpressionPrivate))
enum  {
	VALA_CCODE_CONDITIONAL_EXPRESSION_DUMMY_PROPERTY
};
ValaCCodeConditionalExpression* vala_ccode_conditional_expression_new (ValaCCodeExpression* cond, ValaCCodeExpression* true_expr, ValaCCodeExpression* false_expr);
ValaCCodeConditionalExpression* vala_ccode_conditional_expression_construct (GType object_type, ValaCCodeExpression* cond, ValaCCodeExpression* true_expr, ValaCCodeExpression* false_expr);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
void vala_ccode_conditional_expression_set_condition (ValaCCodeConditionalExpression* self, ValaCCodeExpression* value);
void vala_ccode_conditional_expression_set_true_expression (ValaCCodeConditionalExpression* self, ValaCCodeExpression* value);
void vala_ccode_conditional_expression_set_false_expression (ValaCCodeConditionalExpression* self, ValaCCodeExpression* value);
static void vala_ccode_conditional_expression_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
ValaCCodeExpression* vala_ccode_conditional_expression_get_condition (ValaCCodeConditionalExpression* self);
void vala_ccode_expression_write_inner (ValaCCodeExpression* self, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
ValaCCodeExpression* vala_ccode_conditional_expression_get_true_expression (ValaCCodeConditionalExpression* self);
ValaCCodeExpression* vala_ccode_conditional_expression_get_false_expression (ValaCCodeConditionalExpression* self);
static void vala_ccode_conditional_expression_real_write_inner (ValaCCodeExpression* base, ValaCCodeWriter* writer);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_conditional_expression_finalize (ValaCCodeNode* obj);


ValaCCodeConditionalExpression* vala_ccode_conditional_expression_construct (GType object_type, ValaCCodeExpression* cond, ValaCCodeExpression* true_expr, ValaCCodeExpression* false_expr) {
	ValaCCodeConditionalExpression* self = NULL;
	ValaCCodeExpression* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	ValaCCodeExpression* _tmp2_;
	g_return_val_if_fail (cond != NULL, NULL);
	g_return_val_if_fail (true_expr != NULL, NULL);
	g_return_val_if_fail (false_expr != NULL, NULL);
	self = (ValaCCodeConditionalExpression*) vala_ccode_expression_construct (object_type);
	_tmp0_ = cond;
	vala_ccode_conditional_expression_set_condition (self, _tmp0_);
	_tmp1_ = true_expr;
	vala_ccode_conditional_expression_set_true_expression (self, _tmp1_);
	_tmp2_ = false_expr;
	vala_ccode_conditional_expression_set_false_expression (self, _tmp2_);
	return self;
}


ValaCCodeConditionalExpression* vala_ccode_conditional_expression_new (ValaCCodeExpression* cond, ValaCCodeExpression* true_expr, ValaCCodeExpression* false_expr) {
	return vala_ccode_conditional_expression_construct (VALA_TYPE_CCODE_CONDITIONAL_EXPRESSION, cond, true_expr, false_expr);
}


static void vala_ccode_conditional_expression_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeConditionalExpression * self;
	ValaCCodeExpression* _tmp0_;
	ValaCCodeWriter* _tmp1_;
	ValaCCodeWriter* _tmp2_;
	ValaCCodeExpression* _tmp3_;
	ValaCCodeWriter* _tmp4_;
	ValaCCodeWriter* _tmp5_;
	ValaCCodeExpression* _tmp6_;
	ValaCCodeWriter* _tmp7_;
	self = (ValaCCodeConditionalExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_condition;
	_tmp1_ = writer;
	vala_ccode_expression_write_inner (_tmp0_, _tmp1_);
	_tmp2_ = writer;
	vala_ccode_writer_write_string (_tmp2_, " ? ");
	_tmp3_ = self->priv->_true_expression;
	_tmp4_ = writer;
	vala_ccode_expression_write_inner (_tmp3_, _tmp4_);
	_tmp5_ = writer;
	vala_ccode_writer_write_string (_tmp5_, " : ");
	_tmp6_ = self->priv->_false_expression;
	_tmp7_ = writer;
	vala_ccode_expression_write_inner (_tmp6_, _tmp7_);
}


static void vala_ccode_conditional_expression_real_write_inner (ValaCCodeExpression* base, ValaCCodeWriter* writer) {
	ValaCCodeConditionalExpression * self;
	ValaCCodeWriter* _tmp0_;
	ValaCCodeWriter* _tmp1_;
	ValaCCodeWriter* _tmp2_;
	self = (ValaCCodeConditionalExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	vala_ccode_writer_write_string (_tmp0_, "(");
	_tmp1_ = writer;
	vala_ccode_node_write ((ValaCCodeNode*) self, _tmp1_);
	_tmp2_ = writer;
	vala_ccode_writer_write_string (_tmp2_, ")");
}


ValaCCodeExpression* vala_ccode_conditional_expression_get_condition (ValaCCodeConditionalExpression* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_condition;
	result = _tmp0_;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_conditional_expression_set_condition (ValaCCodeConditionalExpression* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_condition);
	self->priv->_condition = _tmp1_;
}


ValaCCodeExpression* vala_ccode_conditional_expression_get_true_expression (ValaCCodeConditionalExpression* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_true_expression;
	result = _tmp0_;
	return result;
}


void vala_ccode_conditional_expression_set_true_expression (ValaCCodeConditionalExpression* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_true_expression);
	self->priv->_true_expression = _tmp1_;
}


ValaCCodeExpression* vala_ccode_conditional_expression_get_false_expression (ValaCCodeConditionalExpression* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_false_expression;
	result = _tmp0_;
	return result;
}


void vala_ccode_conditional_expression_set_false_expression (ValaCCodeConditionalExpression* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_false_expression);
	self->priv->_false_expression = _tmp1_;
}


static void vala_ccode_conditional_expression_class_init (ValaCCodeConditionalExpressionClass * klass) {
	vala_ccode_conditional_expression_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_conditional_expression_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeConditionalExpressionPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_conditional_expression_real_write;
	VALA_CCODE_EXPRESSION_CLASS (klass)->write_inner = vala_ccode_conditional_expression_real_write_inner;
}


static void vala_ccode_conditional_expression_instance_init (ValaCCodeConditionalExpression * self) {
	self->priv = VALA_CCODE_CONDITIONAL_EXPRESSION_GET_PRIVATE (self);
}


static void vala_ccode_conditional_expression_finalize (ValaCCodeNode* obj) {
	ValaCCodeConditionalExpression * self;
	self = VALA_CCODE_CONDITIONAL_EXPRESSION (obj);
	_vala_ccode_node_unref0 (self->priv->_condition);
	_vala_ccode_node_unref0 (self->priv->_true_expression);
	_vala_ccode_node_unref0 (self->priv->_false_expression);
	VALA_CCODE_NODE_CLASS (vala_ccode_conditional_expression_parent_class)->finalize (obj);
}


/**
 * Represents a conditional expression in C code.
 */
GType vala_ccode_conditional_expression_get_type (void) {
	static volatile gsize vala_ccode_conditional_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_conditional_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeConditionalExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_conditional_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeConditionalExpression), 0, (GInstanceInitFunc) vala_ccode_conditional_expression_instance_init, NULL };
		GType vala_ccode_conditional_expression_type_id;
		vala_ccode_conditional_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeConditionalExpression", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_conditional_expression_type_id__volatile, vala_ccode_conditional_expression_type_id);
	}
	return vala_ccode_conditional_expression_type_id__volatile;
}



