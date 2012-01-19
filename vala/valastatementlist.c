/* valastatementlist.c generated by valac, the Vala compiler
 * generated from valastatementlist.vala, do not modify */

/* valastatementlist.vala
 *
 * Copyright (C) 2008-2010  Jürg Billeter
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
#include <valagee.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_CODE_CONTEXT (vala_code_context_get_type ())
#define VALA_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContext))
#define VALA_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))
#define VALA_IS_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_CONTEXT))
#define VALA_IS_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_CONTEXT))
#define VALA_CODE_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))

typedef struct _ValaCodeContext ValaCodeContext;
typedef struct _ValaCodeContextClass ValaCodeContextClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;

#define VALA_TYPE_STATEMENT (vala_statement_get_type ())
#define VALA_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STATEMENT, ValaStatement))
#define VALA_IS_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STATEMENT))
#define VALA_STATEMENT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_STATEMENT, ValaStatementIface))

typedef struct _ValaStatement ValaStatement;
typedef struct _ValaStatementIface ValaStatementIface;

#define VALA_TYPE_STATEMENT_LIST (vala_statement_list_get_type ())
#define VALA_STATEMENT_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STATEMENT_LIST, ValaStatementList))
#define VALA_STATEMENT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_STATEMENT_LIST, ValaStatementListClass))
#define VALA_IS_STATEMENT_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STATEMENT_LIST))
#define VALA_IS_STATEMENT_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_STATEMENT_LIST))
#define VALA_STATEMENT_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_STATEMENT_LIST, ValaStatementListClass))

typedef struct _ValaStatementList ValaStatementList;
typedef struct _ValaStatementListClass ValaStatementListClass;
typedef struct _ValaStatementListPrivate ValaStatementListPrivate;
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaCodeContext* context);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	gchar* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaStatementIface {
	GTypeInterface parent_iface;
};

struct _ValaStatementList {
	ValaCodeNode parent_instance;
	ValaStatementListPrivate * priv;
};

struct _ValaStatementListClass {
	ValaCodeNodeClass parent_class;
};

struct _ValaStatementListPrivate {
	ValaList* list;
};


static gpointer vala_statement_list_parent_class = NULL;
static ValaStatementIface* vala_statement_list_vala_statement_parent_iface = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
gpointer vala_code_context_ref (gpointer instance);
void vala_code_context_unref (gpointer instance);
GParamSpec* vala_param_spec_code_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_context (GValue* value, gpointer v_object);
void vala_value_take_code_context (GValue* value, gpointer v_object);
gpointer vala_value_get_code_context (const GValue* value);
GType vala_code_context_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
GType vala_statement_get_type (void) G_GNUC_CONST;
GType vala_statement_list_get_type (void) G_GNUC_CONST;
#define VALA_STATEMENT_LIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_STATEMENT_LIST, ValaStatementListPrivate))
enum  {
	VALA_STATEMENT_LIST_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaStatementList* vala_statement_list_new (ValaSourceReference* source_reference);
ValaStatementList* vala_statement_list_construct (GType object_type, ValaSourceReference* source_reference);
ValaCodeNode* vala_code_node_construct (GType object_type);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
ValaStatement* vala_statement_list_get (ValaStatementList* self, gint index);
void vala_statement_list_set (ValaStatementList* self, gint index, ValaStatement* stmt);
void vala_statement_list_add (ValaStatementList* self, ValaStatement* stmt);
void vala_statement_list_insert (ValaStatementList* self, gint index, ValaStatement* stmt);
static void vala_statement_list_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
static void vala_statement_list_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
void vala_code_node_emit (ValaCodeNode* self, ValaCodeGenerator* codegen);
gint vala_statement_list_get_length (ValaStatementList* self);
static void vala_statement_list_finalize (ValaCodeNode* obj);


ValaStatementList* vala_statement_list_construct (GType object_type, ValaSourceReference* source_reference) {
	ValaStatementList* self = NULL;
	ValaSourceReference* _tmp0_;
	g_return_val_if_fail (source_reference != NULL, NULL);
	self = (ValaStatementList*) vala_code_node_construct (object_type);
	_tmp0_ = source_reference;
	vala_code_node_set_source_reference ((ValaCodeNode*) self, _tmp0_);
	return self;
}


ValaStatementList* vala_statement_list_new (ValaSourceReference* source_reference) {
	return vala_statement_list_construct (VALA_TYPE_STATEMENT_LIST, source_reference);
}


ValaStatement* vala_statement_list_get (ValaStatementList* self, gint index) {
	ValaStatement* result = NULL;
	ValaList* _tmp0_;
	gint _tmp1_;
	gpointer _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->list;
	_tmp1_ = index;
	_tmp2_ = vala_list_get (_tmp0_, _tmp1_);
	result = (ValaStatement*) _tmp2_;
	return result;
}


void vala_statement_list_set (ValaStatementList* self, gint index, ValaStatement* stmt) {
	ValaList* _tmp0_;
	gint _tmp1_;
	ValaStatement* _tmp2_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (stmt != NULL);
	_tmp0_ = self->priv->list;
	_tmp1_ = index;
	_tmp2_ = stmt;
	vala_list_set (_tmp0_, _tmp1_, _tmp2_);
}


void vala_statement_list_add (ValaStatementList* self, ValaStatement* stmt) {
	ValaList* _tmp0_;
	ValaStatement* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (stmt != NULL);
	_tmp0_ = self->priv->list;
	_tmp1_ = stmt;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


void vala_statement_list_insert (ValaStatementList* self, gint index, ValaStatement* stmt) {
	ValaList* _tmp0_;
	gint _tmp1_;
	ValaStatement* _tmp2_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (stmt != NULL);
	_tmp0_ = self->priv->list;
	_tmp1_ = index;
	_tmp2_ = stmt;
	vala_list_insert (_tmp0_, _tmp1_, _tmp2_);
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static void vala_statement_list_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaStatementList * self;
	self = (ValaStatementList*) base;
	g_return_if_fail (visitor != NULL);
	{
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		ValaList* _stmt_list;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _stmt_size;
		gint _stmt_index;
		_tmp0_ = self->priv->list;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_stmt_list = _tmp1_;
		_tmp2_ = _stmt_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_stmt_size = _tmp4_;
		_stmt_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			ValaList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_ = NULL;
			ValaStatement* stmt;
			ValaStatement* _tmp11_;
			ValaCodeVisitor* _tmp12_;
			_tmp5_ = _stmt_index;
			_stmt_index = _tmp5_ + 1;
			_tmp6_ = _stmt_index;
			_tmp7_ = _stmt_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _stmt_list;
			_tmp9_ = _stmt_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			stmt = (ValaStatement*) _tmp10_;
			_tmp11_ = stmt;
			_tmp12_ = visitor;
			vala_code_node_accept ((ValaCodeNode*) _tmp11_, _tmp12_);
			_vala_code_node_unref0 (stmt);
		}
		_vala_iterable_unref0 (_stmt_list);
	}
}


static void vala_statement_list_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaStatementList * self;
	self = (ValaStatementList*) base;
	g_return_if_fail (codegen != NULL);
	{
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		ValaList* _stmt_list;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _stmt_size;
		gint _stmt_index;
		_tmp0_ = self->priv->list;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_stmt_list = _tmp1_;
		_tmp2_ = _stmt_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_stmt_size = _tmp4_;
		_stmt_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			ValaList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_ = NULL;
			ValaStatement* stmt;
			ValaStatement* _tmp11_;
			ValaCodeGenerator* _tmp12_;
			_tmp5_ = _stmt_index;
			_stmt_index = _tmp5_ + 1;
			_tmp6_ = _stmt_index;
			_tmp7_ = _stmt_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _stmt_list;
			_tmp9_ = _stmt_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			stmt = (ValaStatement*) _tmp10_;
			_tmp11_ = stmt;
			_tmp12_ = codegen;
			vala_code_node_emit ((ValaCodeNode*) _tmp11_, _tmp12_);
			_vala_code_node_unref0 (stmt);
		}
		_vala_iterable_unref0 (_stmt_list);
	}
}


gint vala_statement_list_get_length (ValaStatementList* self) {
	gint result;
	ValaList* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->list;
	_tmp1_ = vala_collection_get_size ((ValaCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


static void vala_statement_list_class_init (ValaStatementListClass * klass) {
	vala_statement_list_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_statement_list_finalize;
	g_type_class_add_private (klass, sizeof (ValaStatementListPrivate));
	VALA_CODE_NODE_CLASS (klass)->accept = vala_statement_list_real_accept;
	VALA_CODE_NODE_CLASS (klass)->emit = vala_statement_list_real_emit;
}


static void vala_statement_list_vala_statement_interface_init (ValaStatementIface * iface) {
	vala_statement_list_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void vala_statement_list_instance_init (ValaStatementList * self) {
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = VALA_STATEMENT_LIST_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_STATEMENT, (GBoxedCopyFunc) vala_code_node_ref, vala_code_node_unref, _tmp0_);
	self->priv->list = (ValaList*) _tmp1_;
}


static void vala_statement_list_finalize (ValaCodeNode* obj) {
	ValaStatementList * self;
	self = VALA_STATEMENT_LIST (obj);
	_vala_iterable_unref0 (self->priv->list);
	VALA_CODE_NODE_CLASS (vala_statement_list_parent_class)->finalize (obj);
}


GType vala_statement_list_get_type (void) {
	static volatile gsize vala_statement_list_type_id__volatile = 0;
	if (g_once_init_enter (&vala_statement_list_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaStatementListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_statement_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaStatementList), 0, (GInstanceInitFunc) vala_statement_list_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_statement_list_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_statement_list_type_id;
		vala_statement_list_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaStatementList", &g_define_type_info, 0);
		g_type_add_interface_static (vala_statement_list_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_statement_list_type_id__volatile, vala_statement_list_type_id);
	}
	return vala_statement_list_type_id__volatile;
}


