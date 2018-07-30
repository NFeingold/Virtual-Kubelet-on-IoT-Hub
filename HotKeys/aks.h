^+j::

InputBox, resource, Enter Resource, , 640, 480
if resource = 
    Exit
InputBox, hub, Enter Hub, , 640, 480
if hub =
    Exit
InputBox, aks, Enter AKS, , 640, 480
if aks = 
    Exit
InputBox, nodes, Enter Nodes, , 640, 480
if nodes = 
    Exit

Send, az group create -n %resource% --location eastus && az iot hub create -n %hub% -g %resource% --sku S1 && az aks create -g %resource% -n %aks% -c %nodes% --generate-ssh-keys && az aks get-credentials -g %resource% -n %aks% && kubectl get nodes {Enter}

return 
