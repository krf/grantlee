/*
  This file is part of the Grantlee template system.

  Copyright (c) 2009 Stephen Kelly <steveire@gmail.com>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License version 3 only, as published by the Free Software Foundation.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License version 3 for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef WITHNODE_H
#define WITHNODE_H

#include "node.h"

using namespace Grantlee;

class WithNodeFactory : public AbstractNodeFactory
{
  Q_OBJECT
public:
  WithNodeFactory();

  Node* getNode( const QString &tagContent, Parser *p ) const;

};

class WithNode : public Node
{
  Q_OBJECT
public:
  WithNode( FilterExpression, const QString &name, NodeList nodeList, QObject *parent = 0 );

  QString render( Context *c );

  NodeList getNodesByType( const char * className );

private:
  FilterExpression m_filterExpression;
  QString m_name;
  NodeList m_list;

};

#endif

